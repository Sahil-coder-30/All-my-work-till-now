import turtle

def draw_attractive_design6():
    colors = ["red", "orange", "yellow", "green", "blue", "purple"]
    pen = turtle.Turtle()
    pen.speed(10000)
    turtle.bgcolor("black") 
    pen.pensize(1)

    for i in range(1000):
        pen.color(colors[i % 6])
        pen.circle(100)
        pen.left(25)

    pen.hideturtle()

draw_attractive_design6()

turtle.done()