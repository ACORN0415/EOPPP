int test_func(void) {
    int v0 = 70;
    int v1 = 28;
    int v2 = 82;
    int v3 = 30;
    int i;
    v1 = 92;
    v2 = v2 - v3;
    return v0;
}
int main(void) { return test_func(); }
