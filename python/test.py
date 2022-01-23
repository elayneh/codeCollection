def tow(n, start, end, middle):
    if n==1:
        print("move %s from tower %s to tower %s" % (n, start, end))
    else:
        tow(n-1, start, middle, end)
        print("move %s from tower %s to tower %s" % (n, start, end))
        tow(n-1, middle, end, start)

tow(10, "A", "C", "B")