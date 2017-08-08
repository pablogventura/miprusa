#!/usr/bin/env python
# -*- coding: utf8 -*-

import pexpect
import StringIO
from getpass import getpass
comandos = "cd miprusa/;"
comandos+= "git pull; "
comandos+= "cd; "
comandos+= "sudo service octoprint stop; "
comandos+= "cd arduino-1.8.3; "
comandos+= "./arduino --upload ../miprusa/firmware_marlin/Marlin-1.1.3/Marlin/Marlin.ino; "
comandos+= "sudo service octoprint start; "
comandos+= "echo listo"
output = StringIO.StringIO()

c=pexpect.spawn("ssh pi@192.168.2.186 " + comandos, timeout=400)
c.logfile=output
assert c.expect(["password: "]) == 0
c.sendline(getpass("contraseña: "))


c.expect(["listo"])

print("*" *80)
print(output.getvalue())
