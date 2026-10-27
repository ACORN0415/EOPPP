int test_func(void) {
    int v0 = 70;
    int v1 = 13;
    int v2 = 25;
    int i;
    if (v2 > v1) { v2 = v1; }
    return v0;
}
int main(void) { return test_func(); }
