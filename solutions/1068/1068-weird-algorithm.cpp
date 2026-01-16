#include &lt;iostream&gt;
using namespace std;

int main()
{
    long long n;
    cin &gt;&gt; n;
    cout &lt;&lt; n &lt;&lt; &quot; &quot;;
    while (n != 1)
    {
        if (n % 2 == 0)
            n = n / 2;
        else
            n = n * 3 + 1;
        cout &lt;&lt; n &lt;&lt; &quot; &quot;;
    }
    return 0;
}