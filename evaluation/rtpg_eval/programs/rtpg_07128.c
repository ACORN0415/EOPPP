int test_func(void) {
    int v0 = 55;
    int v1 = 66;
    int v2 = 70;
    int v3 = 7;
    int v4 = 51;
    int v5 = 26;
    int v6 = 36;
    int v7 = 20;
    int i;
    if (v0 > v3) { v0 = v3; }
    v1 = v1 % (v4 + 1);
    return v0;
}
int main(void) { return test_func(); }
