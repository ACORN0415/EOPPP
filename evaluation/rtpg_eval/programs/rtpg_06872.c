int test_func(void) {
    int v0 = 58;
    int v1 = 73;
    int v2 = 47;
    int i;
    for (i = 0; i < 10; i++) {
        v0 = v0 + v1;
    }
    return v0;
}
int main(void) { return test_func(); }
