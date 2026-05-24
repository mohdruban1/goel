from turtle import *
import colorsys
tracer(3)
setup(700,900)
h=0.7
bgcolor('black')
pensize(2.3)

for i in range(360):
   c=colorsys.hsv_to_rgb(h,1,1)
   color(c)
   h+=0.004
   circle(150-i,90)
   lt(90)
   lt(20)
   circle(150-i,90)
   lt(150)
done()