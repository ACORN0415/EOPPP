int test_func(void) {
    int v0 = 80;
    int v1 = 83;
    int v2 = 81;
    int i;
    for (i = 0; i < 7; i++) {
        v2 = v2 + v1;
    }
    return v0;
}
int main(void) { return test_func(); }
