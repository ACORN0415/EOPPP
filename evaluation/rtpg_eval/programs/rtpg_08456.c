int test_func(void) {
    int v0 = 98;
    int v1 = 9;
    int v2 = 92;
    int v3 = 98;
    int i;
    for (i = 0; i < 5; i++) {
        v1 = v1 + v2;
    }
    return v0;
}
int main(void) { return test_func(); }
