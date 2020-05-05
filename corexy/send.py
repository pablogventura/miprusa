#!/usr/bin/env python
# -*- coding: utf8 -*-

import pexpect
from io import BytesIO
from getpass import getpass
comandos = "cd miprusa/;"
comandos+= "git pull; "
comandos+= "cd; "
comandos+= "sudo service octoprint stop; "
comandos+= "cd arduino-1.8.5; "
comandos+= "./arduino --upload ../miprusa/corexy/Marlin/Marlin/Marlin.ino; "
comandos+= "sudo service octoprint start; "
comandos+= "echo listo"
output = BytesIO()

c=pexpect.spawn("ssh pi@impresora3d " + comandos, timeout=60*10)
c.logfile=output
assert c.expect(["password: "]) == 0
c.sendline(getpass("contraseña: "))
print(output.getvalue())

c.expect(["listo"])

print("*" *80)
print(output.getvalue())
