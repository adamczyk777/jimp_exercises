namespace datastructures {
    class Counts {
    public:
        Counts();

        Counts(int i);

        Counts &operator++() {
            ++count;
            return *this;
        }

        bool operator==(const Counts &right) {
            return (count == right.count);
        }

        bool operator<(const Counts &right) {
            return (count < right.count);
        }

        bool operator>(const Counts &right) {
            return (count > right.count);
        }

        operator int() const {
            return count;
        }

    private:
        int count;
    };
}