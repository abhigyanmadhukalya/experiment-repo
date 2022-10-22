import math
import rich

power = str(int(math.pow(2, 12)))
rich.print("The value of 2^12 is: " + power)

squareroot = str(int(math.sqrt(64)))
rich.print("The square root of 64 is: " + squareroot)

ceil_num = str((math.ceil(1.03)))
rich.print("The ceil of 1.03 is: " + ceil_num)

log_e = str((math.exp(2.48)))
rich.print("The log_e of 2.48 is: " + log_e)

log_10 = str(math.log10(2))
rich.print("The log_10 of 2 is: " + log_10)

Sin = str(math.sin(1.57))
rich.print("The sin of 1.57 rads (90 deg) is: " + Sin)

Cos = str(math.cos(1.57))
rich.print("The cos of 1.57 rads (90 deg) is: " + Cos)

Tan = str(math.tan(1.57))
rich.print("The tan of 1.57 rads (90 deg) is: " + Tan)

to_deg = str(math.degrees(1.57))
rich.print("1.57 rads in degrees is: " + to_deg)

to_rads = str(math.radians(90))
rich.print("90 degrees in radians is: " + to_rads)

# Examples

a = 10
b = 93
c = 72

rich.print(math.fabs(math.exp(2) - 10)) # |e^x - 10|
rich.print(math.sqrt(a*a + b*b + c*c))
