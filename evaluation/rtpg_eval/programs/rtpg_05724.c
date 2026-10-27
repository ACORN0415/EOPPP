int test_func(void) {
    int v0 = 70;
    int v1 = 89;
    int v2 = 7;
    int v3 = 93;
    int v4 = 25;
    int v5 = 78;
    int v6 = 39;
    int i;
    for (i = 0; i < 11; i++) {
        v3 = v3 + v3;
    }
    return v0;
}
int main(void) { return test_func(); }
