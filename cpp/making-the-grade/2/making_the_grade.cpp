#include <array>
#include <string>
#include <vector>

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
	    sum += (student_score > 40);
	}
    return sum;
}

// Create a list of grade thresholds based on the provided highest grade.
std::array<int, 4> letter_grades(int highest_score) {
    // TODO: Implement letter_grades
    int gap { highest_score - 40 };
    int space { gap / 4 };
    std::array<int, 4> grades{};
    for (int i{0}; i < grades.size(); ++i) {
	    grades[grades.size()-i] = highest_score - space;
	    highest_score -= space;
	}
    return grades;
}

// Organize the student's rank, name, and grade information in ascending order.
std::vector<std::string> student_ranking(
    std::vector<int> student_scores, std::vector<std::string> student_names) {
    // TODO: Implement student_ranking
	std::vector<std::string>rankings {""};
	for (int i{1}; i <= student_names.size(); ++i) {
		std::string string { std::to_string(i) + ". " + student_names[i-1] + ": " + std::to_string(student_scores[i-1]) };
		rankings.emplace_back(string);
	}

    return rankings;
}

// Create a string that contains the name of the first student to make a perfect
// score on the exam.
std::string perfect_score(std::vector<int> student_scores,
                          std::vector<std::string> student_names) {
    // TODO: Implement perfect_score
    bool found {student_scores[0] == 100};
    std::array<std::string, 2> arr {"", student_names[0]};
    return arr[found];
}
