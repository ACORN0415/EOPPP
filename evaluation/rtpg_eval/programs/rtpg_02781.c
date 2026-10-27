int test_func(void) {
    int v0 = 91;
    int v1 = 95;
    int v2 = 98;
    int i;
    if (v1 > v0) { v1 = v0; }
    return v0;
}
int main(void) { return test_func(); }
