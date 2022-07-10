function printTax(price)
  local tax = price * 0.21
  print("tax:" .. tax)
end

printTax(200) -- 200 * 0.21
-------------------------------------------------------

function calculateTax(price)
  return price * 0.21
end

local result = calculateTax(100)
print(result)

-- Reusing the function using variables

local bread = 100
local milk = 50

local breadTax = calculateTax(bread)
local milkTax = calculateTax(milk)

print("Tax for bread is " .. breadTax)
print("Tax for milk is " .. milkTax)
-------------------------------------------------------

-- Multiple Parameters

function displayInfo(name, age, country)
  print(name .. " is " .. age .. " years old and is from " .. country)
end

displayInfo("Abhigyan", 17, "India")
-------------------------------------------------------
