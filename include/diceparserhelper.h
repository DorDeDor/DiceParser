#ifndef DICEPARSERHELPER_H
#define DICEPARSERHELPER_H

namespace Dice
{

enum class CONDITION_STATE : int
{
    ERROR_STATE,
    ALWAYSTRUE,
    UNREACHABLE,
    REACHABLE
};

enum class ERROR_CODE : int
{
    NO_DICE_ERROR,
    DIE_RESULT_EXPECTED,
    BAD_SYNTAXE,
    ENDLESS_LOOP_ERROR,
    DIVIDE_BY_ZERO,
    NOTHING_UNDERSTOOD,
    NO_DICE_TO_ROLL,
    TOO_MANY_DICE,
    NO_VARIBALE,
    INVALID_INDEX,
    UNEXPECTED_CHARACTER,
    NO_PREVIOUS_ERROR,
    NO_VALID_RESULT,
    SCALAR_RESULT_EXPECTED
};

/**
 * @brief The RESULT_TYPE enum or combinaison
 */
enum class RESULT_TYPE : int
{
    NONE= 0,
    SCALAR= 1,
    STRING= 2,
    DICE_LIST= 4
};
/**
 * @brief The ConditionType enum defines compare method
 */
enum ConditionType
{
    OnEach,
    OnEachValue,
    OneOfThem,
    AllOfThem,
    OnScalar
};
} // namespace Dice
#endif // DICEPARSERHELPER_H
