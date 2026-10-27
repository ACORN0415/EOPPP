int test_func(void) {
    int v0 = 12;
    int v1 = 58;
    int v2 = 51;
    int v3 = 95;
    int v4 = 60;
    int v5 = 81;
    int v6 = 14;
    int v7 = 95;
    int i;
    for (i = 0; i < 15; i++) {
        v4 = v4 + v3;
    }
    v2 = v2 - v6;
    return v0;
}
int main(void) { return test_func(); }
