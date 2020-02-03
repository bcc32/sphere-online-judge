a = lambda x, y: sum([1 for i in xrange(len(c(x))) if c(x)[i] == c(y)[i]])
b = lambda x, y: sum([1 for i in xrange(len(c(x))) for j in xrange(len(c(y))) if c(x)[i] == c(y)[j] and i != j])
c = lambda n: map(int, list("%06d" % n))

#for i in open('temp2.txt').readlines():
for i in xrange(1000000):
    i = int(i)
    print i
    if a(i, 321321) == 1 and b(i, 321321) == 7 and \
        a(i, 025133) == 0 and b(i, 025133) == 6 and \
        a(i, 933330) == 0 and b(i, 933330) == 5:
        print "%06d" % i
