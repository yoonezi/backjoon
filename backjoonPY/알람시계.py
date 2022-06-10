# h, m = input().split()
#
# if int(h) == 0:
#     if int(m) >= 45:
#         print(h, int(m) - 45)
#     elif int(m) < 45:
#         m2 = 15 + int(m)
#         print(23, m2)
# else:
#     if int(m) >= 45:
#         print(h, int(m)-45)
#     elif int(m) < 45:
#         m2 = 15 + int(m)
#         print(int(h)-1, m2)


h, m = map(int, input().split())
if m >= 45:
    print(h, m-45)
elif m < 45 and h > 0:
    print(h-1, m+15)
else:
    print(23, m+15)