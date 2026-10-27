int test_func(void) {
    int v0 = 59;
    int v1 = 80;
    int v2 = 74;
    int v3 = 94;
    int v4 = 29;
    int v5 = 59;
    int i;
    for (i = 0; i < 7; i++) {
        v5 = v5 + v3;
    }
    return v0;
}
int main(void) { return test_func(); }
