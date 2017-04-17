namespace datastructures {
    class Counts {
    public:
        Counts();

        Counts(int i);

        Counts &operator++() {
            ++count;
            return *this;
        }

        bool operator==(const Counts &sec) {
            return (count == sec.count);
        }

        bool operator<(const Counts &sec) {
            return (count < sec.count);
        }

        bool operator>(const Counts &sec) {
            return (count > sec.count);
        }

        operator int() const {
            return count;
        }

    private:
        int count;
    };
}