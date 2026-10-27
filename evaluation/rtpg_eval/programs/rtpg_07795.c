int test_func(void) {
    int v0 = 79;
    int v1 = 61;
    int v2 = 28;
    int i;
    for (i = 0; i < 5; i++) {
        v1 = v1 + v0;
    }
    return v0;
}
int main(void) { return test_func(); }
