int test_func(void) {
    int v0 = 67;
    int v1 = 100;
    int v2 = 18;
    int i;
    for (i = 0; i < 5; i++) {
        v2 = v2 + v1;
    }
    return v0;
}
int main(void) { return test_func(); }
