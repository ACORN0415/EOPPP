/*
 * eoppp_v2_test.c — 2.0 일반 경로 시험 프로그램
 *
 *   clamp_scale   if/else 와 사용자 함수 호출(인라이닝)이 있는 스트림 루프
 *   tri_sum       중첩 루프 (안쪽 반복 수가 바깥 변수에 의존)
 *   collatz_len   while 루프 + 짝/홀 분기 (곱셈·시프트·비교)
 *   gcd_steps     뺄셈 기반 GCD — 루프 안 if/else, 반환값
 */

int cs_in[16] = {3, -7, 12, 0, 25, -30, 8, 1, -2, 40, 5, -9, 17, 6, -1, 11};
int cs_out[16];

static int clamp(int v, int lo, int hi)
{
    if (v < lo)
        return lo;
    if (v > hi)
        return hi;
    return v;
}

int clamp_scale(void)
{
    int i, v, acc;

    acc = 0;
    for (i = 0; i < 16; i++) {
        v = cs_in[i];
        v = clamp(v * 3, -20, 20);
        if (v > 0)
            acc = acc + v;
        else
            acc = acc - 1;
        cs_out[i] = v + acc;
    }
    return acc;
}

int tri_sum(void)
{
    int i, j, s;

    s = 0;
    for (i = 0; i < 6; i++)
        for (j = 0; j <= i; j++)
            s = s + i - j;
    return s;
}

int collatz_len(void)
{
    int n, steps, half;

    n = 27;
    steps = 0;
    while (n != 1) {
        half = n >> 1;
        if (n - (half << 1) == 0)
            n = half;
        else
            n = n * 3 + 1;
        steps = steps + 1;
    }
    return steps;
}

int gcd_steps(void)
{
    int a, b, k;

    a = 1071;
    b = 462;
    k = 0;
    while (a != b) {
        if (a > b)
            a = a - b;
        else
            b = b - a;
        k++;
    }
    return a * 1000 + k;
}

int main(void)
{
    clamp_scale();
    tri_sum();
    collatz_len();
    gcd_steps();
    return 0;
}
