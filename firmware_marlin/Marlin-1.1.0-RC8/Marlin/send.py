#!/usr/bin/env python
# -*- coding: utf8 -*-

import pexpect
import StringIO

comandos = "sudo service octoprint stop; "
comandos+= "export DISPLAY=:0; "
comandos+= "cd arduino-1.8.0; "
comandos+= "git pull; "
comandos+= "./arduino --upload ../miprusa/firmware_marlin/Marlin-1.1.0-RC8/Marlin/Marlin.ino; "
comandos+= "sudo service octoprint start; "
comandos+= "echo listo"
output = StringIO.StringIO()

c=pexpect.spawn("ssh linaro@192.168.1.137 " + comandos, timeout=200)
c.logfile=output
assert c.expect(["password: "]) == 0
c.sendline("linaro")


c.expect(["listo"])

print("*" *80)
print(output.getvalue())
