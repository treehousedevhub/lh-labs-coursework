def length_finder(input_array)
  return input_array.collect { |num| num.length.to_s
 }
end

 results = []
 my_array = ['Ruby','Rails','C42']
results = length_finder(my_array)

puts "Results: #{results}"

#should return [4,5,3]
#Array#collect (aka Array#map) method for this. consider the ! on the end
