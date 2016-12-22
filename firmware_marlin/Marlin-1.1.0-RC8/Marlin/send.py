#!/usr/bin/env python
# -*- coding: utf8 -*-

import pexpect
import StringIO

comandos="sudo service octoprint stop; export DISPLAY=:0;cd miprusa/firmware_marlin/Marlin-1.1.0-RC8/Marlin/;git pull;/home/linaro/arduino-1.6.12/arduino --upload Marlin.ino;sudo service octoprint start; echo listo"
output = StringIO.StringIO()

c=pexpect.spawn("ssh linaro@192.168.1.137 " + comandos, timeout=200)
c.logfile=output
c.sendline("linaro")
c.expect(["done"])
print "Octoprint detenido"
if c.expect(["Updating", "up-to-date"]) == 0:
    print "Actualiando repo"
else:
    print "El repo esta al dia"
    
c.expect(["done"])
print "Octoprint inciado"

assert c.expect(["password: "]) == 0

c.expect(["listo"])

print("*" *80)
print(output.getvalue())
