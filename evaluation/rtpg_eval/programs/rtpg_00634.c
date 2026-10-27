int test_func(void) {
    int v0 = 9;
    int v1 = 28;
    int v2 = 37;
    int i;
    if (v1 > v2) { v1 = v2; }
    return v0;
}
int main(void) { return test_func(); }
