int test_func(void) {
    int v0 = 82;
    int v1 = 59;
    int v2 = 31;
    int v3 = 31;
    int v4 = 20;
    int v5 = 98;
    int v6 = 27;
    int i;
    for (i = 0; i < 11; i++) {
        v0 = v0 + v5;
    }
    v6 = 18;
    return v0;
}
int main(void) { return test_func(); }
