using System;
using System.Collections.Generic;

namespace algorithm
{
    class Program
    {
        static int compare(string a, string b)
        {
            if (a.Length == b.Length)
                return a.CompareTo(b);
            else
                return a.Length.CompareTo(b.Length);
        }
        static void Main(string[] args)
        {
            int N = 0;
            string temp;
            List<string> arr = new List<string>();

            N = int.Parse(Console.ReadLine());
            
            for (int i = 0; i < N; i++)
            {
                temp = Console.ReadLine();
                if (arr.Contains(temp))
                    continue;
                arr.Add(temp);
            }

            arr.Sort(compare);

            for (int i = 0; i < arr.Count; i++)
            {
                Console.WriteLine(arr[i]);
            }

        }
    }
}