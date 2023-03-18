using System;

class Program
{
    // 计算圆周率的第n位
    static double PiDigit(int n)
    {
        // BBP公式
        return 16 * ModPow(16, n - 1, 8 * n + 1) / (8 * n + 1) -
               4 * ModPow(16, n - 1, 8 * n + 4) / (8 * n + 4) -
               2 * ModPow(16, n - 1, 8 * n + 5) / (8 * n + 5) -
               ModPow(16, n - 1, 8 * n + 6) / (8 * n + 6);
    }

    // 计算a^b mod m
    static double ModPow(double a, int b, int m)
    {
        double result = a % m;
        for (int i = b - 1; i >0; i--)
        {
            result = result * a % m;
        }
        return result;
    }

    static void Main(string[] args)
    {
        // 输入要计算的位数
        Console.WriteLine("请输入要计算的位数: ");
        int digit = int.Parse(Console.ReadLine());

        // 计算并打印结果
        Console.WriteLine("圆周率的第{0}位是: {1}", digit,
            Math.Floor(PiDigit(digit)) %10);
    }
}
