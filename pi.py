# 使用Leibniz公式计算pi
def leibniz(n):
  t_sum = 0
  for i in range(n):
    term = (-1) ** i / (2 * i + 1)
    t_sum = t_sum + term
  return t_sum * 4

# 输入要计算的项数
terms = int(input("请输入要计算的项数: "))

# 计算并打印结果
pi = leibniz(terms)
print("Pi =", pi)
