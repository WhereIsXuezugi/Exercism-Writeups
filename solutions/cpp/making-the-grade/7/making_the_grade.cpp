#include <array>
#include <string>
#include <vector>
#include <cmath>

// Round down all provided student scores.
std::vector<int> round_down_scores(std::vector<double> student_scores) {
    // TODO: Implement round_down_scores
    std::vector<int> veci_student_scores {};
    for (int i{0}; i < student_scores.size(); ++i) {
	    veci_student_scores.emplace_back(static_cast<int>(student_scores[i]));
    }
    return veci_student_scores;
}

// Count the number of failing students out of the group provided.
int count_failed_students(std::vector<int> student_scores) {
    // TODO: Implement count_failed_students
    int sum {0};
    for (int student_score : student_scores) {
	    sum += (student_score <= 40);
	}
    return sum;
}

// Create a list of grade thresholds based on the provided highest grade.
std::array<int, 4> letter_grades(int highest_score) {
    // TODO: Implement letter_grades
    int gap { highest_score - 40 };
    double space { gap / 4.0 };
    std::array<int, 4> grades{};
  
    /* 
        highest grade             = 88                            100                97
        gap                       = 88 - 40 = 48                  100 - 40 = 60      97 - 40 = 57
        space                     = 48 / 4 = 12                   60 / 4 = 15        57 / 4 = 14.25

        A -> highest grade                88 - 12 * 0 = 88     100 - 15 * 0 = 100    97 - 14.25 * 0 = 97
        
        B -> highest grade - space        88 - 12 * 1 = 76     100 - 15 * 1 = 85     97 - 14.25 * 1 = 82.75
        c -> highest grade - space * 2    88 - 12 * 2 = 64     100 - 15 * 2 = 70     97 - 14.25 * 2 = 68.5
        d -> highest grade - space * 3    88 - 12 * 3 = 52     100 - 15 * 3 = 55     97 - 14.25 * 3 = 54.25
        f - > 40                          88 - 12 * 4 = 40     100 - 15 * 4 = 40     97 - 14.25 * 4 = 40
    */
    
    for (int i{0}; i < 4; ++i) {
        grades[i] = static_cast<int>(std::floor(highest_score - (space*(4-i)))) + 1;
    }
    return grades;
}

// Organize the student's rank, name, and grade information in ascending order.
std::vector<std::string> student_ranking(
    std::vector<int> student_scores, std::vector<std::string> student_names) {
    // TODO: Implement student_ranking
	std::vector<std::string>rankings {};
	for (int i{1}; i <= student_names.size(); ++i) {
		std::string string {std::to_string(i) + ". " + student_names[i-1] + ": " + std::to_string(student_scores[i-1])};
		rankings.emplace_back(string);
	}

    return rankings;
}

// Create a string that contains the name of the first student to make a perfect
// score on the exam.
std::string perfect_score(std::vector<int> student_scores,
                          std::vector<std::string> student_names) {
    int index{0};
    bool found;
    bool f;
    // TODO: Implement perfect_score
    for (int i{0}; i < student_scores.size() && f < 1; ++i) {
        found = student_scores[i] == 100;
        index = i;
        f = found;
    }
    std::array<std::string, 2> arr {"", student_names[index]};
    return arr[found];
}
