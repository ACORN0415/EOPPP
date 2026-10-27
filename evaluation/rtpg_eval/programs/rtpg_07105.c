int test_func(void) {
    int v0 = 72;
    int v1 = 9;
    int v2 = 73;
    int v3 = 60;
    int v4 = 40;
    int v5 = 58;
    int v6 = 34;
    int i;
    if (v2 > v6) { v2 = v6; }
    v0 = v0 - v6;
    return v0;
}
int main(void) { return test_func(); }
