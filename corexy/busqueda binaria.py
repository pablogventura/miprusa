from curtsies import Input

def main():
    a=float(raw_input("Minimo:"))
    b=float(raw_input("Maximo:"))
    print "Probar: %s" % ((a+b)/2)
    with Input(keynames='curses') as input_generator:
        for e in input_generator:
            if ord(e) == 43:
                b = b
                a = (a+b)/2

            elif ord(e) == 45:
                a = a
                b = (a+b)/2
            print "Probar: %s" % ((a+b)/2)

if __name__ == '__main__':
    main()
