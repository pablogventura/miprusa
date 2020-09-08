#/usr/bin/python
import math
TAN = math.tan
PI = math.pi
ACOS = math.acos
SQRT = math.sqrt

AC =141.4
BD =140.9
AD =99.7

AB=SQRT(2*AC*AC+2*BD*BD-4*AD*AD)/2

print(TAN(PI/2-ACOS((AC*AC-AB*AB-AD*AD)/(2*AB*AD))))
