#include <stdio.h>
#include <math.h>

int main()
{
    int T, i;
    double r1, r2, r3, a, b, c, s, A, B, C, tri, area;

    scanf("%d", &T);

    for(i = 1; i <= T; i++)
    {
        scanf("%lf %lf %lf", &r1, &r2, &r3);
        a = r1 + r2;
        b = r2 + r3;
        c = r1 + r3;
        s = (a+b+c) / 2;

        A = acos( ((c*c) + (b*b) - (a*a)) / (2*b*c) );
        B = acos( ((a*a) + (c*c) - (b*b)) / (2*a*c) );
        C = acos( ((a*a) + (b*b) - (c*c)) / (2*b*a) );

        tri = sqrt(s * (s-a) * (s-b) * (s-c));

        area = tri - ((0.5)*(r3*r3*A + r2*r2*C + r1*r1*B));

        printf("Case %d: %0.08lf\n", i, area);
    }

    return 0;
}