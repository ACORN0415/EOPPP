int test_func(void) {
    int v0 = 31;
    int v1 = 47;
    int v2 = 70;
    int v3 = 76;
    int v4 = 95;
    int v5 = 18;
    int i;
    for (i = 0; i < 6; i++) {
        v5 = v5 + v2;
    }
    return v0;
}
int main(void) { return test_func(); }
