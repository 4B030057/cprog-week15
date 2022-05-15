import sys
from random import randint
from mylibs import chk_template

__author__ = "Jung-Lin Yang"
__copyright__ = "Copyright (C) 2022, STUST EECS"
__version__ = "0.1"


def expected():
    dat = [randint(1, 6) for _ in range(randint(10, 30))]
    idat = ' '.join(str(_) for _ in dat)
    odat = []
    odat.append(len(dat))
    for i in range(1,7):
        odat.append(dat.count(i))
    odat = ' '.join(str(_) for _ in odat)
    print(f"Test Data : {idat}")
    return idat, odat


chk_template.expected = expected

if __name__ == "__main__":
    root = f"./src/{sys.argv[0].split('_')[-1].split('.')[0]}"
    loops = 10
    if len(sys.argv) == 2:
        loops = int(sys.argv[1])
    chk_template.main(root, 0, loops)
