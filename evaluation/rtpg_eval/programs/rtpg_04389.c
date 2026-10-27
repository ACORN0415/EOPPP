int test_func(void) {
    int v0 = 31;
    int v1 = 20;
    int v2 = 31;
    int v3 = 11;
    int v4 = 7;
    int v5 = 9;
    int i;
    for (i = 0; i < 14; i++) {
        v1 = v1 + v1;
    }
    return v0;
}
int main(void) { return test_func(); }
