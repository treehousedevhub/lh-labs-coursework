def non_duplicated_values(array)
  return array.select{|element| array.count(element) == 1 }
end

def non_duplicated_values_two(array)
  return array.uniq
end

def duplicated_values(array)
  return array.select{|element| array.count(element) > 1 }
end

target = [1,2,2,3,3,4,5]
puts "The duplicated values are: #{duplicated_values(target)}"
puts "Here are the non-duplicated values method one #{non_duplicated_values(target)}"
puts "List of all values minus the duplicate elements #{non_duplicated_values_two(target)}"


#Example: Given [1,2,2,3,3,4,5], the method should return [1,4,5]