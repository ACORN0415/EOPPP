int test_func(void) {
    int v0 = 59;
    int v1 = 57;
    int v2 = 98;
    int v3 = 19;
    int v4 = 16;
    int v5 = 40;
    int i;
    if (v0 > v3) { v0 = v3; }
    for (i = 0; i < 13; i++) {
        v4 = v4 + v0;
    }
    return v0;
}
int main(void) { return test_func(); }
