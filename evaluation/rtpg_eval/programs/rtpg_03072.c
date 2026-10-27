int test_func(void) {
    int v0 = 40;
    int v1 = 4;
    int v2 = 81;
    int v3 = 89;
    int i;
    v0 = 90;
    v3 = v3 - v1;
    if (v0 > v3) { v0 = v3; }
    v3 = v3 + v2;
    return v0;
}
int main(void) { return test_func(); }
