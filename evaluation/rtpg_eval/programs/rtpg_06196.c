int test_func(void) {
    int v0 = 6;
    int v1 = 30;
    int v2 = 33;
    int v3 = 51;
    int v4 = 59;
    int i;
    for (i = 0; i < 14; i++) {
        v2 = v2 + v4;
    }
    return v0;
}
int main(void) { return test_func(); }
