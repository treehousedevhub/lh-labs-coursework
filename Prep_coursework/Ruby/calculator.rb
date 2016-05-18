class Calculator
  def initialize (person)
     @person = person
  end

  def add(a_number, another_number)
  return a_number + another_number
  end

  def subtract(a_number, another_number)
   return a_number - another_number
  end
end

my_calculator = Calculator.new("Ronald")
puts "Result - add two numbers:"
puts my_calculator.add(2, 3)
puts "Result - subtract two numbers:"
puts my_calculator.subtract(10, 5)