def mead(a, b, c):
    if a>=b:
        if a<=c:
            return a
        elif a>=c:
            if b>=c:
                return b
            else:
                return c
    if a<b:
        if b<=c:
            return b
        elif b>c:
            if a>=c:
                return a
            elif a<c:
                return c

print('세 정수의 중앙값을 구합니다.')
a = int(input("정수 a의 값을 입력하세요 : "))
b = int(input("정수 b의 값을 입력하세요 : "))
c = int(input("정수 c의 값을 입력하세요 : "))
print(f"중앙값은 {mead(a, b, c)}입니다.")