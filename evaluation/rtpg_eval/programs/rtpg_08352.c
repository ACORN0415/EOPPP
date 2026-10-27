int test_func(void) {
    int v0 = 46;
    int v1 = 33;
    int v2 = 74;
    int v3 = 59;
    int v4 = 31;
    int v5 = 10;
    int v6 = 15;
    int v7 = 49;
    int i;
    for (i = 0; i < 9; i++) {
        v7 = v7 + v1;
    }
    v1 = v1 - v5;
    return v0;
}
int main(void) { return test_func(); }
