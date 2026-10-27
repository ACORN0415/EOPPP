int test_func(void) {
    int v0 = 98;
    int v1 = 13;
    int v2 = 30;
    int i;
    v1 = v1 - v0;
    for (i = 0; i < 12; i++) {
        v1 = v1 + v0;
    }
    return v0;
}
int main(void) { return test_func(); }
