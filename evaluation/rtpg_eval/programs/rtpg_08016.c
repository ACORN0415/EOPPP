int test_func(void) {
    int v0 = 68;
    int v1 = 9;
    int v2 = 29;
    int v3 = 2;
    int v4 = 14;
    int v5 = 89;
    int i;
    for (i = 0; i < 13; i++) {
        v1 = v1 + v1;
    }
    return v0;
}
int main(void) { return test_func(); }
