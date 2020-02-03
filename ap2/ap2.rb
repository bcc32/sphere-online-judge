def series(third, third_last, sum)
  3.upto(Float::INFINITY).each do |length|
    i = 2
    j = length - 3
    next if i == j
    if (third_last - third) % (j - i) == 0
      delta = (third_last - third) / (j - i)
      first = third - 2 * delta
      synthetic_sum = first * length + delta * (length - 1) * length / 2
      return (0...length).map { |k| first + k * delta } if
        synthetic_sum == sum
    end
  end
end

if $PROGRAM_NAME == __FILE__
  gets.to_i.times do
    third, third_last, sum = gets.split.map(&:to_i)
    s = series(third, third_last, sum)
    puts s.size
    puts s.join(' ')
  end
end
