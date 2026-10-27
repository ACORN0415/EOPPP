int test_func(void) {
    int v0 = 15;
    int v1 = 8;
    int v2 = 80;
    int i;
    for (i = 0; i < 14; i++) {
        v1 = v1 + v2;
    }
    return v0;
}
int main(void) { return test_func(); }
