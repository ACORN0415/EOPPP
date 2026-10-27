int test_func(void) {
    int v0 = 80;
    int v1 = 9;
    int v2 = 7;
    int v3 = 59;
    int v4 = 95;
    int v5 = 3;
    int v6 = 18;
    int i;
    for (i = 0; i < 15; i++) {
        v5 = v5 + v5;
    }
    return v0;
}
int main(void) { return test_func(); }
